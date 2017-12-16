// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_ItemContainerImmutable
#define INCLUDED_hx_widgets_ItemContainerImmutable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hx,widgets,ItemContainerImmutable)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ItemContainerImmutable_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (hx::Object :: *_hx_setString)(int n,::String string); 
		static inline void setString( ::Dynamic _hx_,int n,::String string) {
			(_hx_.mPtr->*( static_cast< ::hx::widgets::ItemContainerImmutable_obj *>(_hx_.mPtr->_hx_getInterface(0x73706cf3)))->_hx_setString)(n,string);
		}
		::String (hx::Object :: *_hx_getString)(int n); 
		static inline ::String getString( ::Dynamic _hx_,int n) {
			return (_hx_.mPtr->*( static_cast< ::hx::widgets::ItemContainerImmutable_obj *>(_hx_.mPtr->_hx_getInterface(0x73706cf3)))->_hx_getString)(n);
		}
};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_ItemContainerImmutable */ 
