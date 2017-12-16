// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets__FontWeight_FontWeight_Impl_
#define INCLUDED_wx_widgets__FontWeight_FontWeight_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,_FontWeight,FontWeight_Impl_)

#include <wx/font.h>
namespace wx{
namespace widgets{
namespace _FontWeight{


class HXCPP_CLASS_ATTRIBUTES FontWeight_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FontWeight_Impl__obj OBJ_;
		FontWeight_Impl__obj();

	public:
		enum { _hx_ClassId = 0x4208269f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets._FontWeight.FontWeight_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets._FontWeight.FontWeight_Impl_"); }

		hx::ObjectPtr< FontWeight_Impl__obj > __new() {
			hx::ObjectPtr< FontWeight_Impl__obj > __this = new FontWeight_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< FontWeight_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			FontWeight_Impl__obj *__this = (FontWeight_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FontWeight_Impl__obj), false, "wx.widgets._FontWeight.FontWeight_Impl_"));
			*(void **)__this = FontWeight_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FontWeight_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FontWeight_Impl_","\xa7","\x98","\x34","\xa0"); }

		static void __boot();
		static int NORMAL;
		static int LIGHT;
		static int BOLD;
		static int _new(int i);
		static ::Dynamic _new_dyn();

};

} // end namespace wx
} // end namespace widgets
} // end namespace _FontWeight

#endif /* INCLUDED_wx_widgets__FontWeight_FontWeight_Impl_ */ 
