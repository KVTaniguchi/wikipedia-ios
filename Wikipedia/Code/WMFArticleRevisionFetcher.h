

#import <Foundation/Foundation.h>

@interface WMFArticleRevisionFetcher : NSObject

- (instancetype)init;

- (void)setTimeoutInterval:(NSTimeInterval)timeoutInterval;

- (AnyPromise*)fetchLatestRevisionsForTitle:(MWKTitle*)title
                                resultLimit:(NSUInteger)numberOfResults
                         endingWithRevision:(NSUInteger)revisionId;

@end
