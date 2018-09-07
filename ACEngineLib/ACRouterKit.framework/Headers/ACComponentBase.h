//
//  ACRouteModule.h
//  ACRouter
//
//  Created by hb on 2017/8/7.
//  Copyright © 2017年 appcan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ACComponentBaseProtocol.h"


@interface ACComponentBase : NSObject

@property (nonatomic, weak) id<ACComponentBaseProtocol> appContext;

- (instancetype)initWithApp:(id<ACComponentBaseProtocol>)app;

- (instancetype)init;

- (void)onAllInitialized;

+(void)load;
/**
 组件提供tabbar单个页签的界面

 @param params 界面参数
 @return controller
 */
-(id)tabbarInterface:(NSDictionary *)params;

@end
