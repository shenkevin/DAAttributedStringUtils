//
//  DAAttributedStringFormatter.h
//  PrairieSchooner
//
//  Created by David Levi on 1/11/13.
//  Copyright (c) 2013 Double Apps Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString* const DALinkAttributeName;

@interface DAAttributedStringFormatter : NSObject

@property (assign,nonatomic) CGFloat defaultPointSize;
@property (assign,nonatomic) NSInteger defaultWeight;
@property (strong,nonatomic) NSString* defaultFontFamily;
@property (strong,nonatomic) UIColor* defaultColor;
@property (strong,nonatomic) NSArray* fontFamilies;
@property (strong,nonatomic) NSArray* colors;

- (NSAttributedString*) formatString:(NSString*)format;
- (NSAttributedString*) formatString:(NSString*)format linkRanges:(NSArray**)linkRanges_p;

@end
