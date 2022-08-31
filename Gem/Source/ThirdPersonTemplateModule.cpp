
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/Module/Module.h>

#include "ThirdPersonTemplateSystemComponent.h"

namespace ThirdPersonTemplate
{
    class ThirdPersonTemplateModule
        : public AZ::Module
    {
    public:
        AZ_RTTI(ThirdPersonTemplateModule, "{218a1202-47b2-4f26-b918-9c97b16f6e0e}", AZ::Module);
        AZ_CLASS_ALLOCATOR(ThirdPersonTemplateModule, AZ::SystemAllocator, 0);

        ThirdPersonTemplateModule()
            : AZ::Module()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                ThirdPersonTemplateSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<ThirdPersonTemplateSystemComponent>(),
            };
        }
    };
}// namespace ThirdPersonTemplate

AZ_DECLARE_MODULE_CLASS(Gem_ThirdPersonTemplate, ThirdPersonTemplate::ThirdPersonTemplateModule)
