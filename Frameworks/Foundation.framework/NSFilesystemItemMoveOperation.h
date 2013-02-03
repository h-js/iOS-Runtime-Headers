/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSError;

@interface NSFilesystemItemMoveOperation : NSOperation {
    id _delegate;
    NSString *_destinationPath;
    NSError *_error;
    NSString *_sourcePath;
}

+ (id)_errorWithErrno:(NSInteger)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
+ (id)filesystemItemMoveOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2;

- (void)_setError:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (void)initWithSourcePath:(id)arg1 destinationPath:(id)arg2;
- (void)main;
- (void)setDelegate:(id)arg1;

@end
