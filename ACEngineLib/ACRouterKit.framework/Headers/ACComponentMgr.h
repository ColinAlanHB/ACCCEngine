//
//  ACComponentMgr.h
//  CorNativeMain
//
//  Created by CloudWind on 2017/8/10.
//  Copyright © 2017年 coracle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ACRouterKit/ACRouterKit.h>

@interface ACComponentMgr : NSObject<ACComponentBaseDelegate>

@property (nonatomic,strong) NSMutableDictionary *componentInstanceDict;
@property (nonatomic, weak) id<ACComponentBaseProtocol> appDelegate;

+ (instancetype)sharedComponentMgr;

- (void)injectComponent;

@end
