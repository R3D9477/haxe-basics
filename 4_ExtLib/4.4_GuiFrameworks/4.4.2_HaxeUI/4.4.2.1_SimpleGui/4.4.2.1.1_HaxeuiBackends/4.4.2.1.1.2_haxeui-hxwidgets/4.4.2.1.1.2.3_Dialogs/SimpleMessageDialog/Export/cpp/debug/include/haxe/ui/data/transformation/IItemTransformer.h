// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_data_transformation_IItemTransformer
#define INCLUDED_haxe_ui_data_transformation_IItemTransformer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,data,transformation,IItemTransformer)

namespace haxe{
namespace ui{
namespace data{
namespace transformation{


class HXCPP_CLASS_ATTRIBUTES IItemTransformer_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::Dynamic (hx::Object :: *_hx_transformFrom)( ::Dynamic i); 
		static inline  ::Dynamic transformFrom( ::Dynamic _hx_, ::Dynamic i) {
			return (_hx_.mPtr->*( static_cast< ::haxe::ui::data::transformation::IItemTransformer_obj *>(_hx_.mPtr->_hx_getInterface(0xc4b4b36a)))->_hx_transformFrom)(i);
		}
};

} // end namespace haxe
} // end namespace ui
} // end namespace data
} // end namespace transformation

#endif /* INCLUDED_haxe_ui_data_transformation_IItemTransformer */ 
