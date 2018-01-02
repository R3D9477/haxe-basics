// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_Entry
#define INCLUDED_wx_widgets_Entry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(wx,widgets,Entry)


#include <wx/wx.h>
#undef RegisterClass

namespace wx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Entry_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Entry_obj OBJ_;
		Entry_obj();

	public:
		enum { _hx_ClassId = 0x38251224 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.Entry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.Entry"); }

		hx::ObjectPtr< Entry_obj > __new() {
			hx::ObjectPtr< Entry_obj > __this = new Entry_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Entry_obj > __alloc(hx::Ctx *_hx_ctx) {
			Entry_obj *__this = (Entry_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Entry_obj), false, "wx.widgets.Entry"));
			*(void **)__this = Entry_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Entry_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Entry","\x52","\xe8","\xb3","\x03"); }

		static void start(::Array< ::String > args);
		static ::Dynamic start_dyn();

		static void cleanup();
		static ::Dynamic cleanup_dyn();

};

} // end namespace wx
} // end namespace widgets

#endif /* INCLUDED_wx_widgets_Entry */ 
