

#import "UIViewController+WMFArticlePresentation.h"
#import "UIColor+WMFHexColor.h"
#import "Wikipedia-Swift.h"

#import "MWKDataStore.h"
#import "MWKUserDataStore.h"

#import "MWKTitle.h"
#import "MWKHistoryList.h"
#import "MWKHistoryEntry.h"

#import <BlocksKit/BlocksKit+UIKit.h>

#import "PiwikTracker+WMFExtensions.h"
#import "WMFArticleViewController.h"

NS_ASSUME_NONNULL_BEGIN

@implementation UIViewController (WMFArticlePresentation)

- (void)wmf_pushArticleWithTitle:(MWKTitle*)title dataStore:(MWKDataStore*)dataStore restoreScrollPosition:(BOOL)restoreScrollPosition animated:(BOOL)animated {
    if (!restoreScrollPosition) {
        title = [title wmf_titleWithoutFragment];
    }
    WMFArticleViewController* vc = [[WMFArticleViewController alloc] initWithArticleTitle:title dataStore:dataStore];
    [self wmf_pushArticleViewController:vc animated:animated];
}

- (void)wmf_pushArticleWithTitle:(MWKTitle*)title dataStore:(MWKDataStore*)dataStore animated:(BOOL)animated {
    [self wmf_pushArticleWithTitle:title dataStore:dataStore restoreScrollPosition:NO animated:animated];
}

- (void)wmf_pushArticleViewController:(WMFArticleViewController*)viewController animated:(BOOL)animated {
    if (self.navigationController != nil) {
        [self.navigationController pushViewController:viewController animated:animated];
    } else if ([[self.childViewControllers firstObject] isKindOfClass:[UITabBarController class]]) {
        UITabBarController* tab     = (UITabBarController*)[self.childViewControllers firstObject];
        UINavigationController* nav = [tab selectedViewController];
        [nav pushViewController:viewController animated:animated];
    } else {
        NSAssert(0, @"Unexpected view controller hierarchy");
    }
    [[PiwikTracker wmf_configuredInstance] wmf_logView:viewController];

    dispatchOnMainQueueAfterDelayInSeconds(0.5, ^{
        MWKHistoryList* historyList = viewController.dataStore.userDataStore.historyList;
        [historyList addPageToHistoryWithTitle:viewController.articleTitle];
        [historyList save];
    });
}

- (void)wmf_pushViewController:(UIViewController*)viewController animated:(BOOL)animated {
    if (self.navigationController != nil) {
        [self.navigationController pushViewController:viewController animated:animated];
    } else if ([[self.childViewControllers firstObject] isKindOfClass:[UITabBarController class]]) {
        UITabBarController* tab     = (UITabBarController*)[self.childViewControllers firstObject];
        UINavigationController* nav = [tab selectedViewController];
        [nav pushViewController:viewController animated:animated];
    } else {
        NSAssert(0, @"Unexpected view controller hierarchy");
    }
}

@end




NS_ASSUME_NONNULL_END