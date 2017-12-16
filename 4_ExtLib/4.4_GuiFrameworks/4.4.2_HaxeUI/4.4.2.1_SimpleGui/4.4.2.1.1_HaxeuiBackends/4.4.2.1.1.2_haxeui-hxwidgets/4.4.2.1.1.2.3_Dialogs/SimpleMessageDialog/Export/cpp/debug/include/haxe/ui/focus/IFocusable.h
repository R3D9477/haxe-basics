// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#define INCLUDED_haxe_ui_focus_IFocusable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)

namespace haxe{
namespace ui{
namespace focus{


class HXCPP_CLASS_ATTRIBUTES IFocusable_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (hx::Object :: *_hx_get_focus)(); 
		static inline bool get_focus( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::haxe::ui::focus::IFocusable_obj *>(_hx_.mPtr->_hx_getInterface(0x04f087c7)))->_hx_get_focus)();
		}
		bool (hx::Object :: *_hx_set_focus)(bool value); 
		static inline bool set_focus( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( static_cast< ::haxe::ui::focus::IFocusable_obj *>(_hx_.mPtr->_hx_getInterface(0x04f087c7)))->_hx_set_focus)(value);
		}
		bool (hx::Object :: *_hx_get_allowFocus)(); 
		static inline bool get_allowFocus( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::haxe::ui::focus::IFocusable_obj *>(_hx_.mPtr->_hx_getInterface(0x04f087c7)))->_hx_get_allowFocus)();
		}
		bool (hx::Object :: *_hx_set_allowFocus)(bool value); 
		static inline bool set_allowFocus( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( static_cast< ::haxe::ui::focus::IFocusable_obj *>(_hx_.mPtr->_hx_getInterface(0x04f087c7)))->_hx_set_allowFocus)(value);
		}
};

} // end namespace haxe
} // end namespace ui
} // end namespace focus

#endif /* INCLUDED_haxe_ui_focus_IFocusable */ 
