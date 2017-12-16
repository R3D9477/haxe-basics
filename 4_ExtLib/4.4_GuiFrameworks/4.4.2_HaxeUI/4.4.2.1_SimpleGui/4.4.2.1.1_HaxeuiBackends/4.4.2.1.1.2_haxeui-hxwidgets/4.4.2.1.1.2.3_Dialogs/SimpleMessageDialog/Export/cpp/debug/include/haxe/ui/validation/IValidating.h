// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_validation_IValidating
#define INCLUDED_haxe_ui_validation_IValidating

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace validation{


class HXCPP_CLASS_ATTRIBUTES IValidating_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		int (hx::Object :: *_hx_get_depth)(); 
		static inline int get_depth( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::haxe::ui::validation::IValidating_obj *>(_hx_.mPtr->_hx_getInterface(0x1e962029)))->_hx_get_depth)();
		}
		int (hx::Object :: *_hx_set_depth)(int value); 
		static inline int set_depth( ::Dynamic _hx_,int value) {
			return (_hx_.mPtr->*( static_cast< ::haxe::ui::validation::IValidating_obj *>(_hx_.mPtr->_hx_getInterface(0x1e962029)))->_hx_set_depth)(value);
		}
		void (hx::Object :: *_hx_validate)(); 
		static inline void validate( ::Dynamic _hx_) {
			(_hx_.mPtr->*( static_cast< ::haxe::ui::validation::IValidating_obj *>(_hx_.mPtr->_hx_getInterface(0x1e962029)))->_hx_validate)();
		}
		void (hx::Object :: *_hx_updateDisplay)(); 
		static inline void updateDisplay( ::Dynamic _hx_) {
			(_hx_.mPtr->*( static_cast< ::haxe::ui::validation::IValidating_obj *>(_hx_.mPtr->_hx_getInterface(0x1e962029)))->_hx_updateDisplay)();
		}
};

} // end namespace haxe
} // end namespace ui
} // end namespace validation

#endif /* INCLUDED_haxe_ui_validation_IValidating */ 
