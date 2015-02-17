//
// Created by Johnny Sparks on 2/16/15.
// Copyright (c) 2015 Johnny Sparks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class FUUniverse;
@class FUStar;
@class FURegion;


@interface FUStarMap : NSObject

@property (nonatomic) CGRect viewport;
@property (nonatomic) CGSize regionSize;
@property (nonatomic) FURegion *originRegion;
@property (nonatomic) FUUniverse *universe;
@property (nonatomic) NSArray *viewportStars;
@property (nonatomic) NSMutableDictionary *regionStars;

- (FURegion *)regionAtPoint:(CGPoint)point;

- (NSArray *)starsInRegion:(FURegion *)region;

- (NSArray *)regionsInRect:(CGRect)rect;

- (NSArray *)starsInViewport;

- (NSArray *)starsInRect:(CGRect)rect;

- (FUStar *)starAtIndexPath:(NSIndexPath *)path;

@end

