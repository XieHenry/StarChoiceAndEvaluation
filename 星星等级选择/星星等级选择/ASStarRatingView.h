//
//  ASStarRatingView.h
//
//  Created by yanguango on 12/19/11.
//  Copyright (c) 2011 yanguango. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kDefaultMaxRating 5
#define kDefaultLeftMargin 5
#define kDefaultMidMargin 5
#define kDefaultRightMargin 5
#define kDefaultMinAllowedRating 1
#define kDefaultMaxAllowedRating kDefaultMaxRating
#define kDefaultMinStarSize CGSizeMake(5, 5)
@protocol ASStarRatingViewDelegate <NSObject>

//在所用的页面调用这个识别点击了几个星星
- (void)starNumber:(float)f;

@end
@interface ASStarRatingView : UIView {
    UIImage *_notSelectedStar;
    UIImage *_selectedStar;
    UIImage *_halfSelectedStar;
    BOOL _canEdit;
    int _maxRating;
    float _leftMargin;
    float _midMargin;
    float _rightMargin;
    CGSize _minStarSize;
    float _rating;
    float _minAllowedRating;
    float _maxAllowedRating;
    NSMutableArray *_starViews;
}

@property (retain, nonatomic) UIImage *notSelectedStar;
@property (retain, nonatomic) UIImage *selectedStar;
@property (retain, nonatomic) UIImage *halfSelectedStar;
@property (assign, nonatomic) BOOL canEdit;
@property (assign, nonatomic) int maxRating;
@property (assign, nonatomic) float leftMargin;
@property (assign, nonatomic) float midMargin;
@property (assign, nonatomic) float rightMargin;
@property (assign, nonatomic) CGSize minStarSize;
@property (assign, nonatomic) float rating;
@property (assign, nonatomic) float minAllowedRating;
@property (assign, nonatomic) float maxAllowedRating;
@property (assign, nonatomic) id<ASStarRatingViewDelegate>delegate;

@end
