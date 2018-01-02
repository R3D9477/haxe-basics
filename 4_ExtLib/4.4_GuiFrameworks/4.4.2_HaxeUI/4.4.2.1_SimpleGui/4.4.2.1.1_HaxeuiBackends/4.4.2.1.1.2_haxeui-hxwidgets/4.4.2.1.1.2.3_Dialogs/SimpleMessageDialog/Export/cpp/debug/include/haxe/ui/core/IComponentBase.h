// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#define INCLUDED_haxe_ui_core_IComponentBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IComponentBase_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (hx::Object :: *_hx_mapEvent)(::String type, ::Dynamic listener); 
		static inline void mapEvent( ::Dynamic _hx_,::String type, ::Dynamic listener) {
			(_hx_.mPtr->*( static_cast< ::haxe::ui::core::IComponentBase_obj *>(_hx_.mPtr->_hx_getInterface(0xbecc81fe)))->_hx_mapEvent)(type,listener);
		}
		 ::haxe::ui::core::Component (hx::Object :: *_hx_handleAddComponent)( ::haxe::ui::core::Component child); 
		static inline  ::haxe::ui::core::Component handleAddComponent( ::Dynamic _hx_, ::haxe::ui::core::Component child) {
			return (_hx_.mPtr->*( static_cast< ::haxe::ui::core::IComponentBase_obj *>(_hx_.mPtr->_hx_getInterface(0xbecc81fe)))->_hx_handleAddComponent)(child);
		}
};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_IComponentBase */ 
