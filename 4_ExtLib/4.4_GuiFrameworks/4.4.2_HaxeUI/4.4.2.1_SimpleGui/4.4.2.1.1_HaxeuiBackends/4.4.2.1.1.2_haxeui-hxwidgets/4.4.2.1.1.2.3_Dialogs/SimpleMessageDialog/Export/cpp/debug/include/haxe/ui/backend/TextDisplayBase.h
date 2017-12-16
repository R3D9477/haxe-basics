// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_TextDisplayBase
#define INCLUDED_haxe_ui_backend_TextDisplayBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_cc13979f3b496fd3_25_new)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,TextDisplayBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES TextDisplayBase_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TextDisplayBase_obj OBJ_;
		TextDisplayBase_obj();

	public:
		enum { _hx_ClassId = 0x43899dcc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.TextDisplayBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.TextDisplayBase"); }

		hx::ObjectPtr< TextDisplayBase_obj > __new() {
			hx::ObjectPtr< TextDisplayBase_obj > __this = new TextDisplayBase_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< TextDisplayBase_obj > __alloc(hx::Ctx *_hx_ctx) {
			TextDisplayBase_obj *__this = (TextDisplayBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextDisplayBase_obj), true, "haxe.ui.backend.TextDisplayBase"));
			*(void **)__this = TextDisplayBase_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_cc13979f3b496fd3_25_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextDisplayBase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextDisplayBase","\xa6","\xef","\x20","\x3b"); }

		 ::haxe::ui::core::Component parentComponent;
		::String _text;
		 ::haxe::ui::styles::Style _textStyle;
		Float _left;
		Float _top;
		Float _width;
		Float _height;
		Float _textWidth;
		Float _textHeight;
		bool _multiline;
		bool _wordWrap;
		 ::Dynamic _fontInfo;
		void validateData();
		::Dynamic validateData_dyn();

		bool validateStyle();
		::Dynamic validateStyle_dyn();

		void validatePosition();
		::Dynamic validatePosition_dyn();

		void validateDisplay();
		::Dynamic validateDisplay_dyn();

		void measureText();
		::Dynamic measureText_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_TextDisplayBase */ 
