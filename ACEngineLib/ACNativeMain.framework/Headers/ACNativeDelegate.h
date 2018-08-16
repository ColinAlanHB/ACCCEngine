//
//  ACNativeDelegate.h
//  ACNativeMain
//
//  Created by CloudWind on 2017/8/4.
//  Copyright © 2017年 coracle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ACRouterKit/ACRouterKit.h>

@interface ACNativeDelegate : NSObject<UIApplicationDelegate, ACComponentBaseProtocol>

@property (nonatomic,strong) UIWindow *window;

@end
