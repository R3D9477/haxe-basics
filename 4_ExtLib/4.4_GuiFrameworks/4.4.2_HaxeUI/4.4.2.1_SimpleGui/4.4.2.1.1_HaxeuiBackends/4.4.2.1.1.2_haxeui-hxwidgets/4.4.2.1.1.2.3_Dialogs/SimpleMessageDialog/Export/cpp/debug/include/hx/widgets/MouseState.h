// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_MouseState
#define INCLUDED_hx_widgets_MouseState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hx,widgets,MouseState)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES MouseState_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		int (hx::Object :: *_hx_get_x)(); 
		static inline int get_x( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::hx::widgets::MouseState_obj *>(_hx_.mPtr->_hx_getInterface(0xc03ba76b)))->_hx_get_x)();
		}
		int (hx::Object :: *_hx_get_y)(); 
		static inline int get_y( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::hx::widgets::MouseState_obj *>(_hx_.mPtr->_hx_getInterface(0xc03ba76b)))->_hx_get_y)();
		}
};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_MouseState */ 
