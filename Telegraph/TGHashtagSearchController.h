#import <LegacyComponents/LegacyComponents.h>

@class TGPresentation;

@interface TGHashtagSearchController : TGViewController

@property (nonatomic, strong) TGPresentation *presentation;

@property (nonatomic) int64_t customResultBlockPeerId;
@property (nonatomic, copy) void (^customResultBlock)(int32_t messageId);

- (instancetype)initWithQuery:(NSString *)query peerId:(int64_t)peerId accessHash:(int64_t)accessHash;

@end
