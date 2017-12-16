// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#define INCLUDED_haxe_ui_core_IDataComponent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,core,IDataComponent)
HX_DECLARE_CLASS3(haxe,ui,data,DataSource)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IDataComponent_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::haxe::ui::data::DataSource (hx::Object :: *_hx_get_dataSource)(); 
		static inline  ::haxe::ui::data::DataSource get_dataSource( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::haxe::ui::core::IDataComponent_obj *>(_hx_.mPtr->_hx_getInterface(0xfafb3fc3)))->_hx_get_dataSource)();
		}
		 ::haxe::ui::data::DataSource (hx::Object :: *_hx_set_dataSource)( ::haxe::ui::data::DataSource value); 
		static inline  ::haxe::ui::data::DataSource set_dataSource( ::Dynamic _hx_, ::haxe::ui::data::DataSource value) {
			return (_hx_.mPtr->*( static_cast< ::haxe::ui::core::IDataComponent_obj *>(_hx_.mPtr->_hx_getInterface(0xfafb3fc3)))->_hx_set_dataSource)(value);
		}
};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_IDataComponent */ 
