//
//  MovieDetailView.h
//  HWMtime
//
//  Created by mac on 15/11/9.
//  Copyright © 2015年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StarView.h"
#import "Movie.h"
@interface MovieDetailView : UIView
@property (weak, nonatomic) IBOutlet UILabel *titleCnLbel;
@property (weak, nonatomic) IBOutlet UILabel *titleEnLabel;

@property (weak, nonatomic) IBOutlet UILabel *yearLabel;
@property (weak, nonatomic) IBOutlet UILabel *ratingLabel;
@property (weak, nonatomic) IBOutlet UIImageView *ImageView;
@property (weak, nonatomic) IBOutlet StarView *starView;

@property (nonatomic,strong)Movie *movie;

@end
