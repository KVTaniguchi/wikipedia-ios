

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

static CGSize const WMFImageTagMinimumSizeForGalleryInclusion = {64, 64};

@interface WMFImageTag : NSObject

@property (nonatomic, copy, readwrite) NSString* src;
@property (nonatomic, copy, readonly, nullable) NSString* srcset;
@property (nonatomic, copy, readonly, nullable) NSString* alt;
@property (nonatomic, strong, readonly, nullable) NSNumber* width;
@property (nonatomic, strong, readonly, nullable) NSNumber* height;
@property (nonatomic, strong, readonly, nullable) NSNumber* dataFileWidth;
@property (nonatomic, strong, readonly, nullable) NSNumber* dataFileHeight;

@property (nonatomic, copy, readonly) NSString *imageTagContents;

- (instancetype)initWithSrc:(NSString*)src
                     srcset:(nullable NSString*)srcset
                        alt:(nullable NSString*)alt
                      width:(nullable NSString*)width
                     height:(nullable NSString*)height
              dataFileWidth:(nullable NSString*)dataFileWidth
             dataFileHeight:(nullable NSString*)dataFileHeight NS_DESIGNATED_INITIALIZER;


- (instancetype)initWithImageTagContents:(NSString *)imageTagContents;

- (BOOL)isSizeLargeEnoughForGalleryInclusion;

- (void)setValue:(NSString *)value forAttribute:(NSString *)attribute; // don't use this to set any of the attributes that have properties above (src, srcset, alt, etc)

@end

NS_ASSUME_NONNULL_END
