
#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/EditContext.h>
#include <AzCore/Serialization/EditContextConstants.inl>

#include "ThirdPersonTemplateSystemComponent.h"

namespace ThirdPersonTemplate
{
    void ThirdPersonTemplateSystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (AZ::SerializeContext* serialize = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serialize->Class<ThirdPersonTemplateSystemComponent, AZ::Component>()
                ->Version(0)
                ;

            if (AZ::EditContext* ec = serialize->GetEditContext())
            {
                ec->Class<ThirdPersonTemplateSystemComponent>("ThirdPersonTemplate", "[Description of functionality provided by this System Component]")
                    ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                        ->Attribute(AZ::Edit::Attributes::AppearsInAddComponentMenu, AZ_CRC("System"))
                        ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ;
            }
        }
    }

    void ThirdPersonTemplateSystemComponent::GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC("ThirdPersonTemplateService"));
    }

    void ThirdPersonTemplateSystemComponent::GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC("ThirdPersonTemplateService"));
    }

    void ThirdPersonTemplateSystemComponent::GetRequiredServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& required)
    {
    }

    void ThirdPersonTemplateSystemComponent::GetDependentServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& dependent)
    {
    }

    ThirdPersonTemplateSystemComponent::ThirdPersonTemplateSystemComponent()
    {
        if (ThirdPersonTemplateInterface::Get() == nullptr)
        {
            ThirdPersonTemplateInterface::Register(this);
        }
    }

    ThirdPersonTemplateSystemComponent::~ThirdPersonTemplateSystemComponent()
    {
        if (ThirdPersonTemplateInterface::Get() == this)
        {
            ThirdPersonTemplateInterface::Unregister(this);
        }
    }

    void ThirdPersonTemplateSystemComponent::Init()
    {
    }

    void ThirdPersonTemplateSystemComponent::Activate()
    {
        ThirdPersonTemplateRequestBus::Handler::BusConnect();
    }

    void ThirdPersonTemplateSystemComponent::Deactivate()
    {
        ThirdPersonTemplateRequestBus::Handler::BusDisconnect();
    }
}
