//
//  ProtocolDelegate.h
//  GITTesting
//
//  Created by WithHeart on 2018/2/23.
//  Copyright © 2018年 WithHeart. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ProtocolDelegate <NSObject>

// 必须实现的方法
@required
- (void)error;

// 可选实现的方法
@optional
- (void)other;
- (void)other2;
- (void)other3;

@end
