//
//  FSViewController.h
//  FourSqurae_TolgaCaner
//
//  Created by Tolga Caner on 25/04/14.
//  Copyright (c) 2014 Tolga Caner. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FSCollectionViewController.h"

@interface FSViewController : UIViewController <UITextFieldDelegate>
{
    UITextField* textfield1;
    UITextField* textfield2;
}

-(void)saveToken:(NSString*)token;


@end
