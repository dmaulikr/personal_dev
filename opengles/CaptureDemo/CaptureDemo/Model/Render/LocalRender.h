//
//  LocalRender.h
//  CaptureDemo
//
//  Created by hongfalin on 2017/5/4.
//  Copyright © 2017年 hongfalin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>
#include <OpenGLES/EAGL.h>

@interface LocalRender : UIView{
    
}

-(void) renderImage:(unsigned char*)rbga Width:(UInt32)width Height:(UInt32)height;

@end

