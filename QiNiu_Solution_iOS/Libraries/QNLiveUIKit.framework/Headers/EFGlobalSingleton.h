//
//  EFGlobalSingleton.h
//  SenseMeEffects
//
//  Created by 马浩萌 on 2021/11/30.
//  Copyright © 2021 SenseTime. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString * const EFGlobalSingletonMaleKey = @"EFGlobalSingletonMaleKey";

@interface EFGlobalSingleton : NSObject

@property (nonatomic, assign) int efTouchTriggerAction; // 点击屏幕触发事件保存
@property (nonatomic, assign) BOOL efHasSegmentCapability; // 标识是否有皮肤分割capability
@property (nonatomic, assign) BOOL isMale; // 标识当前用户性别（不同默认参数）

+(instancetype)sharedInstance;
-(instancetype)init NS_UNAVAILABLE;
+(instancetype)new NS_UNAVAILABLE;
+(instancetype)alloc NS_UNAVAILABLE;

@end

