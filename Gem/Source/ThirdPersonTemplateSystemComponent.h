
#pragma once

#include <AzCore/Component/Component.h>

#include <ThirdPersonTemplate/ThirdPersonTemplateBus.h>

namespace ThirdPersonTemplate
{
    class ThirdPersonTemplateSystemComponent
        : public AZ::Component
        , protected ThirdPersonTemplateRequestBus::Handler
    {
    public:
        AZ_COMPONENT(ThirdPersonTemplateSystemComponent, "{1a91bde9-25fb-408d-91b7-153fd802e38a}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

        ThirdPersonTemplateSystemComponent();
        ~ThirdPersonTemplateSystemComponent();

    protected:
        ////////////////////////////////////////////////////////////////////////
        // ThirdPersonTemplateRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
