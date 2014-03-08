//
//  SPThemeResolver.h
//  StackOverflowClient
//
//  Created by Rex St. John on 11/16/13.
//  Copyright (c) 2013 Rex St. John. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SPTheme.h"

@interface SPThemeResolver : NSObject

+ (id<SPTheme>)theme;

@end
