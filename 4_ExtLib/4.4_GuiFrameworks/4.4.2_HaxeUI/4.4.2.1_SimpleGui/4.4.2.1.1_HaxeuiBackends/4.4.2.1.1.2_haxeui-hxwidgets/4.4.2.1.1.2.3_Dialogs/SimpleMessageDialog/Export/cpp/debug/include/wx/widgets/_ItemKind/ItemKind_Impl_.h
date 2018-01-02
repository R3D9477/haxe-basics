// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets__ItemKind_ItemKind_Impl_
#define INCLUDED_wx_widgets__ItemKind_ItemKind_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,_ItemKind,ItemKind_Impl_)

#include <wx/menu.h>
namespace wx{
namespace widgets{
namespace _ItemKind{


class HXCPP_CLASS_ATTRIBUTES ItemKind_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ItemKind_Impl__obj OBJ_;
		ItemKind_Impl__obj();

	public:
		enum { _hx_ClassId = 0x3522a11f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets._ItemKind.ItemKind_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets._ItemKind.ItemKind_Impl_"); }

		hx::ObjectPtr< ItemKind_Impl__obj > __new() {
			hx::ObjectPtr< ItemKind_Impl__obj > __this = new ItemKind_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ItemKind_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			ItemKind_Impl__obj *__this = (ItemKind_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ItemKind_Impl__obj), false, "wx.widgets._ItemKind.ItemKind_Impl_"));
			*(void **)__this = ItemKind_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ItemKind_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ItemKind_Impl_","\x07","\x68","\x4d","\xe7"); }

		static void __boot();
		static int ITEM_SEPARATOR;
		static int ITEM_NORMAL;
		static int ITEM_CHECK;
		static int ITEM_RADIO;
		static int ITEM_DROPDOWN;
		static int _new(int i);
		static ::Dynamic _new_dyn();

};

} // end namespace wx
} // end namespace widgets
} // end namespace _ItemKind

#endif /* INCLUDED_wx_widgets__ItemKind_ItemKind_Impl_ */ 
