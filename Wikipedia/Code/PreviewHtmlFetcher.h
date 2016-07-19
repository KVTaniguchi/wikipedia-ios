

#import <Foundation/Foundation.h>
#import "FetcherBase.h"

@class AFHTTPSessionManager;

@interface PreviewHtmlFetcher : FetcherBase

// Kick-off method. Results are reported to "delegate" via the FetchFinishedDelegate protocol method.
- (instancetype)initAndFetchHtmlForWikiText:(NSString*)wikiText
                                      title:(MWKTitle*)title
                                withManager:(AFHTTPSessionManager*)manager
                         thenNotifyDelegate:(id <FetchFinishedDelegate>)delegate;
@end
