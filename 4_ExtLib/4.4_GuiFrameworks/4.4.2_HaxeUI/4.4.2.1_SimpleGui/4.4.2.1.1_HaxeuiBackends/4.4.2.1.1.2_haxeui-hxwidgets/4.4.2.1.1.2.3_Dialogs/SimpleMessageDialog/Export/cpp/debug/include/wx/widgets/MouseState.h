// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_MouseState
#define INCLUDED_wx_widgets_MouseState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(wx,widgets,MouseState)

namespace wx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES MouseState_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		int (hx::Object :: *_hx_GetX)(); 
		static inline int GetX( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::wx::widgets::MouseState_obj *>(_hx_.mPtr->_hx_getInterface(0x43356aba)))->_hx_GetX)();
		}
		int (hx::Object :: *_hx_GetY)(); 
		static inline int GetY( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::wx::widgets::MouseState_obj *>(_hx_.mPtr->_hx_getInterface(0x43356aba)))->_hx_GetY)();
		}
};

} // end namespace wx
} // end namespace widgets

#endif /* INCLUDED_wx_widgets_MouseState */ 
