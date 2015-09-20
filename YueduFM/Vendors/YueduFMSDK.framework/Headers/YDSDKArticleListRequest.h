//
//  YDSDKArticleListRequest.h
//  YueduFMSDK
//
//  Created by StarNet on 9/18/15.
//  Copyright (c) 2015 StarNet. All rights reserved.
//

#import <YueduFMSDK/YueduFMSDK.h>

@interface YDSDKArticleListRequest : YDSDKRequest

/** 文章id, 返回该id对应的列表，0表示获取最新 */
@property (nonatomic, assign) int articleId;

@property (nonatomic, readonly) NSArray* modelArray;

// 子类继承
- (Class)modelClass;

@end
