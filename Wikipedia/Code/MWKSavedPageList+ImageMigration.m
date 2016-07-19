

#import "MWKSavedPageList+ImageMigration.h"
#import "MWKSavedPageList+ImageMigrationTesting.h"

@implementation MWKSavedPageList (ImageMigration)

- (void)markImageDataAsMigratedForEntryWithTitle:(MWKTitle*)title {
    [self markImageDataAsMigrated:YES forEntryWithTitle:title];
}

@end
