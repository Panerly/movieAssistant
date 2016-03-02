//
//  TopDetailCell.m
//  HWMtime
//
//  Created by mac on 15/11/6.
//  Copyright © 2015年 mac. All rights reserved.
//

#import "TopDetailCell.h"
#import "UIImageView+WebCache.h"
@implementation TopDetailCell

- (void)awakeFromNib {
}

-(void)layoutSubviews
{
    [super layoutSubviews];
    [_imgView sd_setImageWithURL:[NSURL URLWithString:_topDetail.userImage]];
    
    _nicknameLabel.text = _topDetail.nickname;
    _ratingLabel.text = _topDetail.rating;
    _contentLabel.text = _topDetail.content;
}


- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
