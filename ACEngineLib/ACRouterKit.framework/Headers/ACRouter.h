//
//  ACRoute.h
//  ACRouter
//
//  Created by hb on 2017/8/5.
//  Copyright © 2017年 appcan. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^ACRouterHandler)(int code, NSString *msg ,NSDictionary *data);

@interface ACRouter : NSObject

+ (instancetype) route;

/**
 注册路由模块
 
 @param modeleName 类名
 */
- (void)registACRouteModule:(NSString *)modeleName withAction:(NSArray *)actions;


/**
 路由调用组件url方法
 */
- (id)openURL:(NSString *)URL toHandler:(ACRouterHandler)handler;


/**
 路由调用组件普通方法
 */
- (id)performTarget:(NSString *)targetName action:(NSString *)actionName params:(NSDictionary *)params;

/**
 路由调用组件普通方法带回调
 */
- (id)performTarget:(NSString *)targetName action:(NSString *)actionName params:(NSDictionary *)params toHandler:(ACRouterHandler)handler;


- (id)performTarget:(NSString *)targetName action:(NSString *)actionName params:(NSDictionary *)params shouldCacheTarget:(BOOL)shouldCacheTarget;

/**
 注册信号
 */
- (void)registModule:(id)module withSignal:(NSString *)signal;
/**
 监听模块信号
 */
- (void)subscriptionModule:(NSString *)moduleName Signal:(NSString *)signal Listener:(id)listenerObject withAction:(SEL)listenerAction;
/**
 发布模块信号
 */
- (void)publishModule:(NSString *)publishName withSignal:(NSString *)signal params:(id)data;

/**
 移除信号
 */
- (void)removeSubscriptionModule:(NSString *)moduleName Signal:(NSString *)signal Listener:(id)listenerObject;


- (void)realizeCode:(int)code msg:(NSString *)msg data:(NSDictionary *)data block:(id) handler;

@end
