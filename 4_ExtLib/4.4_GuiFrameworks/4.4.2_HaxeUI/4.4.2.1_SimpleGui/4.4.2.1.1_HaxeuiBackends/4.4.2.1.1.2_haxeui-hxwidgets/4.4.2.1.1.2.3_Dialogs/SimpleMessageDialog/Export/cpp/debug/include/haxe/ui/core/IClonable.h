// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_core_IClonable
#define INCLUDED_haxe_ui_core_IClonable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,core,IClonable)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IClonable_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::Dynamic (hx::Object :: *_hx_cloneComponent)(); 
		static inline  ::Dynamic cloneComponent( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::haxe::ui::core::IClonable_obj *>(_hx_.mPtr->_hx_getInterface(0x7e9cb512)))->_hx_cloneComponent)();
		}
		 ::Dynamic (hx::Object :: *_hx_self)(); 
		static inline  ::Dynamic self( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::haxe::ui::core::IClonable_obj *>(_hx_.mPtr->_hx_getInterface(0x7e9cb512)))->_hx_self)();
		}
};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_IClonable */ 
