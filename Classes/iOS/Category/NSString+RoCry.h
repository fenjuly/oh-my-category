//
//  NSString+RoCry.h
//  GithubMobile
//
//  Created by Tian Xia on 6/28/12.
//  Copyright (c) 2012 FeN. All rights unreserved.
//

#import <Foundation/Foundation.h>

@interface NSString (RoCry)

// from AFNetworking
- (NSString *)base64EncodedStringFromString;

- (NSString *)stringFromHexString;

- (BOOL)isEmpty;
- (NSString *)escapeHTML;
@end
