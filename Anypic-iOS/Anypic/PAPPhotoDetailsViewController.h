//
//  PAPPhotoDetailViewController.h
//  Project Way
//
//  Created by Bryan Marks on 9/20/15.
//  Copyright (c) 2015 Project Way. All rights reserved.
//


#import "PAPPhotoDetailsHeaderView.h"
#import "PAPBaseTextCell.h"

@interface PAPPhotoDetailsViewController : PFQueryTableViewController <UITextFieldDelegate, UIActionSheetDelegate, PAPPhotoDetailsHeaderViewDelegate, PAPBaseTextCellDelegate>

@property (nonatomic, strong) PFObject *photo;

- (id)initWithPhoto:(PFObject*)aPhoto;

@end
