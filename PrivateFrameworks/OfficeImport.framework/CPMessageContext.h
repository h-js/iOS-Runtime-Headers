/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface CPMessageContext : NSObject {
    NSMutableArray *m_errors;
    NSMutableArray *m_warnings;
}

+ (void)createContextForCurrentThread;
+ (id)getError:(NSInteger)arg1;
+ (long)getErrorCount;
+ (id)getWarning:(NSInteger)arg1;
+ (long)getWarningCount;
+ (void)initialize;
+ (BOOL)isFileStructuredStorage;
+ (void)logProblems;
+ (void)removeContextForCurrentThread;
+ (void)reportError:(struct CPTaggedMessageStructure { NSInteger x1; id x2; }*)arg1;
+ (void)reportErrorException:(id)arg1;
+ (void)reportWarning:(struct CPTaggedMessageStructure { NSInteger x1; id x2; }*)arg1;
+ (void)reportWarningException:(id)arg1;
+ (void)setIsFileStructuredStorage:(BOOL)arg1;

- (void)dealloc;
- (id)init;

@end
