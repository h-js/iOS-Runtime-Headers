/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLDiskController : NSObject {
    struct { 
        unsigned int dontWarnOfDiskSpace : 1; 
        unsigned int probablyLowOnDiskSpace : 1; 
        unsigned int extra : 30; 
    } _flags;
    double _lastFSCheck;
}

+ (id)sharedInstance;

- (void)alertSheet:(id)arg1 buttonClicked:(NSInteger)arg2;
- (BOOL)hasEnoughDiskToTakePicture;
- (id)init;
- (void)noteFileSystemChanged:(id)arg1;
- (void)presentDiskSpaceWarningIfNecessary;

@end
