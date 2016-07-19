

#import "MWKSavedPageList+ImageMigrationTesting.h"
#import "MWKList+Subclass.h"
#import "MWKSavedPageEntry+ImageMigration.h"

@implementation MWKSavedPageList (ImageMigrationInternal)

- (void)markImageDataAsMigrated:(BOOL)didMigrate forEntryWithTitle:(MWKTitle*)title {
    return [self updateEntryWithListIndex:title update:^BOOL (MWKSavedPageEntry* entry) {
        if (entry.didMigrateImageData == didMigrate) {
            return NO;
        }
        entry.didMigrateImageData = didMigrate;
        return YES;
    }];
}

@end
