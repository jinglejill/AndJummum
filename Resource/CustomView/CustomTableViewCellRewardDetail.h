//
//  CustomTableViewCellRewardDetail.h
//  Jummum2
//
//  Created by Thidaporn Kijkamjai on 30/4/2561 BE.
//  Copyright © 2561 Appxelent. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomTableViewCellRewardDetail : UITableViewCell
@property (strong, nonatomic) IBOutlet UIImageView *imgVwValue;
@property (strong, nonatomic) IBOutlet UILabel *lblHeader;
@property (strong, nonatomic) IBOutlet UILabel *lblSubTitle;
@property (strong, nonatomic) IBOutlet UILabel *lblRemark;
@property (strong, nonatomic) IBOutlet NSLayoutConstraint *lblHeaderHeight;
@property (strong, nonatomic) IBOutlet NSLayoutConstraint *lblSubTitleHeight;
@property (strong, nonatomic) IBOutlet NSLayoutConstraint *imgVwValueHeight;
@property (strong, nonatomic) IBOutlet NSLayoutConstraint *lblRemarkWidth;
@property (strong, nonatomic) IBOutlet UIImageView *imgRemark;

@end
