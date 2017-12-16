// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_util_Rectangle
#define INCLUDED_haxe_ui_util_Rectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_3e20e808f897463f_9_new)
HX_DECLARE_CLASS3(haxe,ui,util,Rectangle)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES Rectangle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Rectangle_obj OBJ_;
		Rectangle_obj();

	public:
		enum { _hx_ClassId = 0x3745a853 };

		void __construct(hx::Null< Float >  __o_left,hx::Null< Float >  __o_top,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util.Rectangle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.util.Rectangle"); }

		hx::ObjectPtr< Rectangle_obj > __new(hx::Null< Float >  __o_left,hx::Null< Float >  __o_top,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height) {
			hx::ObjectPtr< Rectangle_obj > __this = new Rectangle_obj();
			__this->__construct(__o_left,__o_top,__o_width,__o_height);
			return __this;
		}

		static hx::ObjectPtr< Rectangle_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_left,hx::Null< Float >  __o_top,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height) {
			Rectangle_obj *__this = (Rectangle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Rectangle_obj), false, "haxe.ui.util.Rectangle"));
			*(void **)__this = Rectangle_obj::_hx_vtable;
{
Float left = __o_left.Default(0);
Float top = __o_top.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
            	HX_STACKFRAME(&_hx_pos_3e20e808f897463f_9_new)
HXLINE(  10)		( ( ::haxe::ui::util::Rectangle)(__this) )->left = left;
HXLINE(  11)		( ( ::haxe::ui::util::Rectangle)(__this) )->top = top;
HXLINE(  12)		( ( ::haxe::ui::util::Rectangle)(__this) )->width = width;
HXLINE(  13)		( ( ::haxe::ui::util::Rectangle)(__this) )->height = height;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Rectangle_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Rectangle","\x0f","\xb4","\x4f","\xbb"); }

		Float left;
		Float top;
		Float width;
		Float height;
		Float get_right();
		::Dynamic get_right_dyn();

		Float set_right(Float value);
		::Dynamic set_right_dyn();

		Float get_bottom();
		::Dynamic get_bottom_dyn();

		Float set_bottom(Float value);
		::Dynamic set_bottom_dyn();

		void inflate(Float dx,Float dy);
		::Dynamic inflate_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_Rectangle */ 
