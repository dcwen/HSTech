//
//  HSAlbumListView.h
//  微博照片选择
//
//  Created by 洪欣 on 17/2/8.
//  Copyright © 2017年 洪欣. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HSAlbumModel.h"

@protocol HSAlbumListViewDelegate <NSObject>

- (void)didTableViewCellClick:(HSAlbumModel *)model animate:(BOOL)anim;

@end

@interface HSAlbumListView : UIView
@property (weak, nonatomic) id<HSAlbumListViewDelegate> delegate;
@property (copy, nonatomic) NSArray *list;
@end

@interface HSAlbumListViewCell : UITableViewCell
@property (strong, nonatomic) HSAlbumModel *model;
@end
