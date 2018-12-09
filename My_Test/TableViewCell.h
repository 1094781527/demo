//
//  TableViewCell.h
//  My_Test
//
//  Created by 高翔 on 2018/11/18.
//  Copyright © 2018 高翔. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TableViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UIImageView *myCell_imgeView;
@property (strong, nonatomic) IBOutlet UILabel *myCell_label1;
@property (strong, nonatomic) IBOutlet UILabel *myCell_label2;

@end

NS_ASSUME_NONNULL_END
