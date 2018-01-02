// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_core_DialogEntry
#define INCLUDED_haxe_ui_core_DialogEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_bbac88761a9e2dd9_15_new)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,Dialog)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,DialogEntry)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES DialogEntry_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DialogEntry_obj OBJ_;
		DialogEntry_obj();

	public:
		enum { _hx_ClassId = 0x10397831 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.DialogEntry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.core.DialogEntry"); }

		hx::ObjectPtr< DialogEntry_obj > __new() {
			hx::ObjectPtr< DialogEntry_obj > __this = new DialogEntry_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< DialogEntry_obj > __alloc(hx::Ctx *_hx_ctx) {
			DialogEntry_obj *__this = (DialogEntry_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DialogEntry_obj), true, "haxe.ui.core.DialogEntry"));
			*(void **)__this = DialogEntry_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_bbac88761a9e2dd9_15_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DialogEntry_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DialogEntry","\x6a","\x26","\xa5","\x62"); }

		 ::haxe::ui::core::Component overlay;
		 ::haxe::ui::containers::dialogs::Dialog dialog;
		 ::Dynamic callback;
		Dynamic callback_dyn() { return callback;}
};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_DialogEntry */ 
