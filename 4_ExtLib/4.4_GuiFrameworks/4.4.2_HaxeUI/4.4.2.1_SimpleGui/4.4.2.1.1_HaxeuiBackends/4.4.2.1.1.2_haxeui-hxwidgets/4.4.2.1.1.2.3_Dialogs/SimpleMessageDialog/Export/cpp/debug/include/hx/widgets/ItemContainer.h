// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_ItemContainer
#define INCLUDED_hx_widgets_ItemContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_ItemContainerImmutable
#include <hx/widgets/ItemContainerImmutable.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,ItemContainer)
HX_DECLARE_CLASS2(hx,widgets,ItemContainerImmutable)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ItemContainer_obj {
	public:
		typedef  ::hx::widgets::ItemContainerImmutable_obj super;
		HX_DO_INTERFACE_RTTI;

		void (hx::Object :: *_hx_setString)(int n,::String string); 
		static inline void setString( ::Dynamic _hx_,int n,::String string) {
			(_hx_.mPtr->*( static_cast< ::hx::widgets::ItemContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x112d794f)))->_hx_setString)(n,string);
		}
		::String (hx::Object :: *_hx_getString)(int n); 
		static inline ::String getString( ::Dynamic _hx_,int n) {
			return (_hx_.mPtr->*( static_cast< ::hx::widgets::ItemContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x112d794f)))->_hx_getString)(n);
		}
		int (hx::Object :: *_hx_append)(::String string); 
		static inline int append( ::Dynamic _hx_,::String string) {
			return (_hx_.mPtr->*( static_cast< ::hx::widgets::ItemContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x112d794f)))->_hx_append)(string);
		}
};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_ItemContainer */ 
