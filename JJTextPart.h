//
//  JJTextPart.h
//  coretext
//
//  Created by KimBox on 15/5/26.
//  Copyright (c) 2015年 KimBox. All rights reserved.
//



#import <Foundation/Foundation.h>

@interface JJTextPart : NSObject

/** NSRange*/
@property(nonatomic,assign)NSRange range;

/** NSString*/
@property(nonatomic,copy)NSString *text;

/** NSInteger*/
@property(nonatomic,assign)NSInteger index;

/**被正则规则出来的单词吗?*/
@property(nonatomic,assign)BOOL isRegular;

@end
