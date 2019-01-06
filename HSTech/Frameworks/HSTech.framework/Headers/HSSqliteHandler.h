//
//  HSSqliteHandler.h
//  workProject
//
//  Created by CWen、文 on 2017/3/28.
//  Copyright © 2017年 huashitech. All rights reserved.
//

#import <Foundation/Foundation.h>


#define SqliteHandler [HSSqliteHandler sharedSqliteHandler]

@interface HSSqliteHandler : NSObject

@property (nonatomic, strong) FMDatabase *db;

@property (nonatomic, strong) FMDatabaseQueue *dbQueue;

// 数据库名称
@property (nonatomic, copy) NSString *dbName;

// 数据库路径
@property (nonatomic, copy) NSString *dbPath;

singleton_h(SqliteHandler)


/**
 通过一个数据模型对象创建一个表，表名为对象名字，表字段为对象属性

 @param model    数据模型对象
 */
- (BOOL)createTableWithModel:(id)model;


/**
 通过一个表名，字典创建一个表，表字段为字典key

 @param name      表名
 @param dict      字典
 */
- (BOOL)createTableWithName:(NSString *)name dict:(NSDictionary *)dict;


/**
 给表插入一个模型对象数据，表名默认对象类名

 @param model    模型对象
 @param result   执行结果
 */
- (void)insertTableWithModel:(id)model result:(boolBlock)result;


/**
 给表插入一个字典数据

 @param name      表名
 @param dict      字典数据
 @param result    执行结果
 */
- (void)insertTableWithName:(NSString *)name dict:(NSDictionary *)dict result:(boolBlock)result;


/**
 给表插入模型数组，表名默认对象类名

 @param array     模型数组
 @param result    执行结果
 */
- (void)insertTableWithModelArray:(NSArray *)array result:(boolBlock)result;


/**
 给表插入字典数组

 @param name      表名
 @param array     字典数组
 @param result    执行结果
 */
- (void)insertTableWithName:(NSString *)name dictArray:(NSArray *)array result:(boolBlock)result;


/**
 通过模型对象更新数据，表名默认对象类名

 @param model  模型对象
 @param whereDict 条件字典
 @param result 执行结果
 */
- (void)updataTableWithModel:(id)model whereDict:(NSDictionary *)whereDict result:(boolBlock)result;


/**
 通过字典更新数据

 @param name     表名
 @param dict     字典数据
 @param whereDict 条件字典
 @param result   执行结果
 */
- (void)updataTableWithName:(NSString *)name
                       dict:(NSDictionary *)dict
                  whereDict:(NSDictionary *)whereDict
                     result:(boolBlock)result;



/**
 删除表中数据，表名为对象类名

 @param model    对象
 @param whereDict 条件字典
 @param result   执行结果
 */
- (void)deleteTableWithModel:(id)model whereDict:(NSDictionary *)whereDict result:(boolBlock)result;


/**
 删除表中数据

 @param name   表名
 @param whereDict 条件字典
 @param result 执行结果
 */
- (void)deleteTableWithName:(NSString *)name whereDict:(NSDictionary *)whereDict result:(boolBlock)result;


/**
 删除表

 @param tableName 表名

 @return 是否删除
 */
- (BOOL)deleteTable:(NSString *)tableName;


/**
 删除表中所以数据

 @param tableName 表名

 @return 是否删除
 */
- (BOOL)deleteAllDataFromTable:(NSString *)tableName;


/**
 模糊查询表中数据，通过模型结构，表名默认模型类名

 @param model   实例对象
 @param where   查找的字段
 @param desc    关键字
 @param results 查询结果
 */
- (void)searchItemWithModel:(id)model where:(NSString *)where desc:(NSString *)desc results:(arrayBlock)results;


/**
 模糊查询表中数据，通过字典结构

 @param table   表名
 @param dict    字段结构
 @param where   查找的字段
 @param desc    关键字
 @param results 查询结果
 */
- (void)searchItemWithTable:(NSString *)table dict:(NSDictionary *)dict where:(NSString *)where desc:(NSString *)desc results:(arrayBlock)results;


/**
 返回表是否存在

 @param tableName 表名

 @return 是否存在
 */
- (BOOL)isExistTable:(NSString *)tableName;


- (BOOL)isExistDataWithTable:(NSString *)tableName Key:(NSString *)key value:(NSString *)value;


/**
 返回表中多少条数据

 @param tableName 表名

 @return 数据条数
 */
- (NSInteger)tableItemCount:(NSString *)tableName where:(NSString *)where value:(NSString *)value;


/**
 返回表中的字段名

 @param tableName 表名

 @return 字段名数组
 */
- (NSArray *)columnNameArray:(NSString *)tableName;


//- (BOOL)isExistsDataWithModel:(id)model;


/**
 将操作语句放入block中即可保证线程安全

 @param block 回调
 */
- (void)inDatabase:(void (^)(void))block;


/**
 事务: 将操作语句放入block中可执行回滚操作(*rollback = YES;)

 @param block 回调
 */
- (void)inTransaction:(void(^)(BOOL *rollback))block;


/**
 获取对象所有属性所有

 @param obj 对象
 @return 返回属性数组
 */
- (NSArray *)getAllProperties:(id)obj;

- (NSArray *)getAllPropertiesWithClass:(Class)cls;


@end
