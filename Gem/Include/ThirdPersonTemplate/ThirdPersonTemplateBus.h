
#pragma once

#include <AzCore/EBus/EBus.h>
#include <AzCore/Interface/Interface.h>

namespace ThirdPersonTemplate
{
    class ThirdPersonTemplateRequests
    {
    public:
        AZ_RTTI(ThirdPersonTemplateRequests, "{421d4841-0c17-4512-91ed-86296789947f}");
        virtual ~ThirdPersonTemplateRequests() = default;
        // Put your public methods here
    };

    class ThirdPersonTemplateBusTraits
        : public AZ::EBusTraits
    {
    public:
        //////////////////////////////////////////////////////////////////////////
        // EBusTraits overrides
        static constexpr AZ::EBusHandlerPolicy HandlerPolicy = AZ::EBusHandlerPolicy::Single;
        static constexpr AZ::EBusAddressPolicy AddressPolicy = AZ::EBusAddressPolicy::Single;
        //////////////////////////////////////////////////////////////////////////
    };

    using ThirdPersonTemplateRequestBus = AZ::EBus<ThirdPersonTemplateRequests, ThirdPersonTemplateBusTraits>;
    using ThirdPersonTemplateInterface = AZ::Interface<ThirdPersonTemplateRequests>;

} // namespace ThirdPersonTemplate
