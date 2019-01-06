//
//  HSSqliteHandler+Select.h
//  HSTech
//
//  Created by CWen、文 on 2018/9/18.
//  Copyright © 2018年 huashitech. All rights reserved.
//

#import "HSTech.h"

@interface HSSqliteHandler (Select)

/*----------------------同步查询---------------------*/
/**
 查询数据，表名默认对象类名，通过条件字典查询

 @param model 数据对象
 @param whereDict 条件字典
 @return 查询结果
 */
- (NSArray *)selectTableWithModel:(id)model
                        whereDict:(NSDictionary *)whereDict;

/**
 查询数据，表名默认类名，通过条件字典查询
 
 @param cls 数据类
 @param whereDict 条件字典
 @return 查询结果
 */
- (NSArray *)selectTableWithClass:(Class)cls
                        whereDict:(NSDictionary *)whereDict;

/**
 查询数据，表名默认对象类名，通过条件字典查询数据;  同步方式
 
 @param model 匿名对象
 @param whereDict 条件字典
 @param desc 是否降序
 @return 查询结果
 */
- (NSArray *)selectTableWithModel:(id)model
                        whereDict:(NSDictionary *)whereDict
                         orderKey:(NSString *)orderKey
                             desc:(BOOL)desc;

/**
 查询数据，表名默认类名，通过条件字典查询数据;  同步方式
 
 @param cls 数据类
 @param whereDict 条件字典
 @param desc 是否降序
 @return 查询结果
 */
- (NSArray *)selectTableWithClass:(Class)cls
                        whereDict:(NSDictionary *)whereDict
                         orderKey:(NSString *)orderKey
                             desc:(BOOL)desc;

/**
 查询数据，通过条件 字典 查询
 
 @param name    表名
 @param dict    数据结构字典
 @param whereDict   条件字典
 @return 查询结果
 */
- (NSArray *)selectTableWithName:(NSString *)name
                            dict:(NSDictionary *)dict
                       whereDict:(NSDictionary *)whereDict;

/**
 查询数据，通过 条件字典 和排序字段查询
 
 @param name    表名
 @param dict    数据结构字典
 @param whereDict 条件字典
 @param desc 是否降序
 @return 查询结果
 */
- (NSArray *)selectTableWithName:(NSString *)name
                            dict:(NSDictionary *)dict
                       whereDict:(NSDictionary *)whereDict
                        orderKey:(NSString *)orderKey
                            desc:(BOOL)desc;
/*----------------------同步查询---------------------*/




/*----------------------异步查询---------------------*/
/**
 查询数据，表名默认对象类名，通过条件字典查询，异步查询
 
 @param model   数据对象
 @param whereDict  条件字典
 @param results 查询结果
 */
- (void)selectTableWithModel:(id)model
                   whereDict:(NSDictionary *)whereDict
                     results:(arrayBlock)results;

/**
 查询数据，表名默认类名，通过条件字典查询，异步查询
 
 @param cls   数据类
 @param whereDict  条件字典
 @param results 查询结果
 */
- (void)selectTableWithClass:(Class)cls
                   whereDict:(NSDictionary *)whereDict
                     results:(arrayBlock)results;

/**
 查询数据，表名默认对象类名，通过条件字典和排序字段查询，异步查询
 
 @param model   数据对象
 @param whereDict 条件字典
 @param orderKey 排序字段
 @param desc 是否降序
 @param results 查询结果
 */
- (void)selectTableWithModel:(id)model
                   whereDict:(NSDictionary *)whereDict
                    orderKey:(NSString *)orderKey
                        desc:(BOOL)desc
                     results:(arrayBlock)results;

/**
 查询数据，表名默认类名，通过条件字典和排序字段查询，异步查询
 
 @param cls   数据类
 @param whereDict 条件字典
 @param orderKey 排序字段
 @param desc 是否降序
 @param results 查询结果
 */
- (void)selectTableWithClass:(Class)cls
                   whereDict:(NSDictionary *)whereDict
                    orderKey:(NSString *)orderKey
                        desc:(BOOL)desc
                     results:(arrayBlock)results;

/**
 查询数据，通过条件 字典 查询
 
 @param name    表名
 @param dict    数据结构字典
 @param whereDict   条件字典
 @param results 查询结果
 */
- (void)selectTableWithName:(NSString *)name
                       dict:(NSDictionary *)dict
                  whereDict:(NSDictionary *)whereDict
                    results:(arrayBlock)results;

/**
 查询数据，通过 条件字典 和排序字段查询
 
 @param name    表名
 @param dict    数据结构字典
 @param whereDict 条件字典
 @param desc 是否降序
 @param results 查询结果
 */
- (void)selectTableWithName:(NSString *)name
                       dict:(NSDictionary *)dict
                  whereDict:(NSDictionary *)whereDict
                   orderKey:(NSString *)orderKey
                       desc:(BOOL)desc
                    results:(arrayBlock)results;

/**
 查询数据，sql语句查询
 
 @param sqlStr   sql语句
 @param results 查询结果
 */
- (void)selectTableWithModel:(id)model
                      sqlStr:(NSString *)sqlStr
                     results:(arrayBlock)results;

/**
 查询数据，sql语句查询
 
 @param sqlStr   sql语句
 @param results 查询结果
 */
- (void)selectTableWithClass:(Class)cls
                      sqlStr:(NSString *)sqlStr
                     results:(arrayBlock)results;


/**
 查询数据，返回传入的对象数组
 
 @param sqlStr   sql语句
 @param results 查询结果
 */
- (void)selectTableWithDict:(NSDictionary *)dict
                     sqlStr:(NSString *)sqlStr
                    results:(arrayBlock)results;

/*----------------------异步查询---------------------*/
@end
