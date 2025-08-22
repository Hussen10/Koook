<!DOCTYPE html>
<html lang="ar">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>دليل استضافة تطبيق تتبع الموقع</title>
    <style>
        :root {
            --primary: #1a73e8;
            --secondary: #4285f4;
            --accent: #34a853;
            --warning: #fbbc05;
            --danger: #ea4335;
            --light: #f8f9fa;
            --dark: #202124;
        }
        
        * {
            box-sizing: border-box;
            margin: 0;
            padding: 0;
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
        }
        
        body {
            background: linear-gradient(135deg, #f5f7fa 0%, #c3cfe2 100%);
            color: #333;
            line-height: 1.6;
            padding: 20px;
            direction: rtl;
        }
        
        .container {
            max-width: 1200px;
            margin: 0 auto;
            background: white;
            border-radius: 15px;
            box-shadow: 0 10px 30px rgba(0, 0, 0, 0.1);
            overflow: hidden;
        }
        
        header {
            background: linear-gradient(90deg, var(--primary), var(--secondary));
            color: white;
            padding: 30px 20px;
            text-align: center;
        }
        
        .app-icon {
            font-size: 60px;
            margin-bottom: 15px;
        }
        
        .tabs {
            display: flex;
            background: #f1f3f4;
            border-bottom: 2px solid var(--primary);
        }
        
        .tab {
            padding: 15px 25px;
            cursor: pointer;
            font-weight: bold;
            transition: all 0.3s;
            border-bottom: 3px solid transparent;
        }
        
        .tab.active {
            background: white;
            border-bottom: 3px solid var(--primary);
            color: var(--primary);
        }
        
        .tab-content {
            display: none;
            padding: 30px;
        }
        
        .tab-content.active {
            display: block;
            animation: fadeIn 0.5s;
        }
        
        @keyframes fadeIn {
            from { opacity: 0; }
            to { opacity: 1; }
        }
        
        .card {
            background: white;
            border-radius: 10px;
            padding: 25px;
            margin-bottom: 25px;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.05);
            border-left: 5px solid var(--primary);
        }
        
        h2 {
            color: var(--primary);
            margin-bottom: 20px;
            padding-bottom: 10px;
            border-bottom: 2px solid #eee;
        }
        
        h3 {
            color: var(--secondary);
            margin: 15px 0;
        }
        
        .step {
            display: flex;
            align-items: flex-start;
            margin: 20px 0;
            padding: 20px;
            background: var(--light);
            border-radius: 10px;
        }
        
        .step-number {
            background: var(--primary);
            color: white;
            width: 40px;
            height: 40px;
            border-radius: 50%;
            display: flex;
            align-items: center;
            justify-content: center;
            font-weight: bold;
            margin-left: 15px;
            flex-shrink: 0;
        }
        
        .code {
            background: #2d2d2d;
            color: #f8f8f2;
            padding: 15px;
            border-radius: 5px;
            margin: 15px 0;
            overflow-x: auto;
            font-family: monospace;
            direction: ltr;
            text-align: left;
        }
        
        .btn {
            background: linear-gradient(90deg, var(--primary), var(--secondary));
            color: white;
            border: none;
            padding: 12px 25px;
            border-radius: 50px;
            cursor: pointer;
            font-size: 16px;
            font-weight: bold;
            transition: all 0.3s;
            display: inline-block;
            margin: 10px 5px;
            text-decoration: none;
        }
        
        .btn:hover {
            transform: translateY(-3px);
            box-shadow: 0 5px 15px rgba(0, 0, 0, 0.2);
        }
        
        .screenshot {
            width: 100%;
            border: 1px solid #ddd;
            border-radius: 5px;
            margin: 15px 0;
            box-shadow: 0 3px 10px rgba(0,0,0,0.1);
        }
        
        .notes {
            background: #fff8e1;
            padding: 15px;
            border-radius: 5px;
            border-right: 5px solid var(--warning);
            margin: 15px 0;
        }
        
        .notes h4 {
            color: var(--warning);
            margin-bottom: 10px;
        }
        
        footer {
            text-align: center;
            padding: 20px;
            background: #f1f3f4;
            color: #666;
            font-size: 14px;
        }
        
        @media (max-width: 768px) {
            .tabs {
                flex-direction: column;
            }
            
            .step {
                flex-direction: column;
            }
            
            .step-number {
                margin-left: 0;
                margin-bottom: 15px;
            }
        }
    </style>
</head>
<body>
    <div class="container">
        <header>
            <div class="app-icon">🌐</div>
            <h1>دليل استضافة تطبيق تتبع الموقع</h1>
            <p>خطوة بخطوة لاستضافة تطبيقك على GitHub Pages</p>
        </header>
        
        <div class="tabs">
            <div class="tab active" onclick="switchTab(0)">إنشاء حساب GitHub</div>
            <div class="tab" onclick="switchTab(1)">إنشاء مستودع جديد</div>
            <div class="tab" onclick="switchTab(2)">رفع ملفات التطبيق</div>
            <div class="tab" onclick="switchTab(3)">تفعيل GitHub Pages</div>
        </div>
        
        <div class="tab-content active">
            <h2>الخطوة 1: إنشاء حساب على GitHub</h2>
            
            <div class="step">
                <div class="step-number">1</div>
                <div>
                    <h3>اذهب إلى موقع GitHub</h3>
                    <p>افتح متصفحك واذهب إلى <a href="https://github.com/" target="_blank">github.com</a></p>
                    <p>انقر على "Sign up" في الزاوية اليمنى العليا</p>
                </div>
            </div>
            
            <div class="step">
                <div class="step-number">2</div>
                <div>
                    <h3>املأ معلومات الحساب</h3>
                    <p>أدخل اسم المستخدم، عنوان البريد الإلكتروني، وكلمة المرور</p>
                    <p>اختر خطة الحساب المجانية (Free)</p>
                </div>
            </div>
            
            <div class="step">
                <div class="step-number">3</div>
                <div>
                    <h3>أكّد بريدك الإلكتروني</h3>
                    <p>افتح بريدك الإلكتروني وانقر على رابط التأكيد من GitHub</p>
                    <p>ستتمكن بعدها من الدخول إلى حسابك الجديد</p>
                </div>
            </div>
            
            <div class="notes">
                <h4>ملاحظة مهمة</h4>
                <p>احتفظ بمعلومات حسابك في مكان آمن لأنك ستحتاجها لاحقاً</p>
            </div>
            
            <a href="#" class="btn" onclick="switchTab(1)">الانتقال إلى الخطوة التالية</a>
        </div>
        
        <div class="tab-content">
            <h2>الخطوة 2: إنشاء مستودع جديد</h2>
            
            <div class="step">
                <div class="step-number">1</div>
                <div>
                    <h3>ادخل إلى حسابك على GitHub</h3>
                    <p>بعد تسجيل الدخول، انقر على زر "+" في الزاوية اليمنى العليا</p>
                    <p>اختر "New repository" من القائمة المنسدلة</p>
                </div>
            </div>
            
            <div class="step">
                <div class="step-number">2</div>
                <div>
                    <h3>املأ معلومات المستودع</h3>
                    <p>أدخل اسماً للمستودع، مثلاً: phone-tracker</p>
                    <p>اختر "Public" لجعل المستودع عاماً (مطلوب للاستضافة المجانية)</p>
                    <p>اختر "Initialize this repository with a README"</p>
                </div>
            </div>
            
            <div class="step">
                <div class="step-number">3</div>
                <div>
                    <h3>أنشئ المستودع</h3>
                    <p>انقر على زر "Create repository"</p>
                    <p>سيتم إنشاء مستودع جديد برابط يشبه: github.com/اسمك/phone-tracker</p>
                </div>
            </div>
            
            <div class="notes">
                <h4>نصيحة</h4>
                <p>اختر اسماً واضحاً ومعبراً عن مشروعك ليسهل تذكره لاحقاً</p>
            </div>
            
            <a href="#" class="btn" onclick="switchTab(0)">الخطوة السابقة</a>
            <a href="#" class="btn" onclick="switchTab(2)">الانتقال إلى الخطوة التالية</a>
        </div>
        
        <div class="tab-content">
            <h2>الخطوة 3: رفع ملفات التطبيق</h2>
            
            <div class="step">
                <div class="step-number">1</div>
                <div>
                    <h3>أنشئ ملف HTML</h3>
                    <p>انسخ الكود الموجود في هذا الدليل</p>
                    <p>احفظه في ملف باسم index.html على جهازك</p>
                </div>
            </div>
            
            <div class="step">
                <div class="step-number">2</div>
                <div>
                    <h3>ادخل إلى مستودعك على GitHub</h3>
                    <p>اذهب إلى المستودع الذي أنشأته في الخطوة السابقة</p>
                    <p>انقر على زر "Add file" ثم اختر "Upload files"</p>
                </div>
            </div>
            
            <div class="step">
                <div class="step-number">3</div>
                <div>
                    <h3>ارفع الملف</h3>
                    <p>اسحب ملف index.html وأفلته في المنطقة المخصصة</p>
                    <p>أو انقر على "choose your files" واختر الملف من جهازك</p>
                    <p>أدخل وصفاً للتغيير في حقل "Commit message"</p>
                    <p>انقر على "Commit changes"</p>
                </div>
            </div>
            
            <div class="notes">
                <h4>بديل أسهل</h4>
                <p>يمكنك أيضاً نسخ ولصق محتوى الملف مباشرة في GitHub عن طريق:</p>
                <p>1. النقر على "Add file" → "Create new file"</p>
                <p>2. تسمية الملف index.html</p>
                <p>3. لصق محتوى HTML في محرر النصوص</p>
                <p>4. ثم النقر على "Commit new file"</p>
            </div>
            
            <a href="#" class="btn" onclick="switchTab(1)">الخطوة السابقة</a>
            <a href="#" class="btn" onclick="switchTab(3)">الانتقال إلى الخطوة التالية</a>
        </div>
        
        <div class="tab-content">
            <h2>الخطوة 4: تفعيل GitHub Pages</h2>
            
            <div class="step">
                <div class="step-number">1</div>
                <div>
                    <h3>اذهب إلى إعدادات المستودع</h3>
                    <p>في صفحة المستودع، انقر على زر "Settings" في القائمة العلوية</p>
                </div>
            </div>
            
            <div class="step">
                <div class="step-number">2</div>
                <div>
                    <h3>اختر خيار Pages</h3>
                    <p>في القائمة الجانبية، انقر على "Pages"</p>
                    <p>ضمن "Branch"، اختر "main" من القائمة المنسدلة</p>
                    <p>اترك مجلد "/ (root)" كما هو</p>
                    <p>انقر على "Save"</p>
                </div>
            </div>
            
            <div class="step">
                <div class="step-number">3</div>
                <div>
                    <h3>انتظر حتى يتم النشر</h3>
                    <p>ستظهر رسالة تفيد بأن موقعك جاهز للنشر</p>
                    <p>قد يستغرق النشر بضع دقائق</p>
                    <p>بعد اكتمال النشر، ستظهر رسالة خضراء تحتوي على رابط موقعك</p>
                    <p>سيكون الرابط مشابهاً: اسم-المستخدم.github.io/اسم-المستودع</p>
                </div>
            </div>
            
            <div class="step">
                <div class="step-number">4</div>
                <div>
                    <h3>اختبر موقعك</h3>
                    <p>انقر على الرابط لفتح موقعك في متصفح جديد</p>
                    <p>اختبر جميع وظائف التطبيق للتأكد من عملها بشكل صحيح</p>
                </div>
            </div>
            
            <div class="notes">
                <h4>معلومة مفيدة</h4>
                <p>يمكنك تحديث موقعك في أي وقت عن طريق رفع ملفات معدلة إلى المستودع</p>
                <p>سيتم تحديث الموقع تلقائياً خلال بضع دقائق من رفع التغييرات</p>
            </div>
            
            <a href="#" class="btn" onclick="switchTab(2)">الخطوة السابقة</a>
            <a href="#" class="btn" onclick="switchTab(0)">العودة إلى البداية</a>
        </div>
        
        <footer>
            <p>© 2023 دليل استضافة تطبيقات الويب. هذا الدليل لأغراض تعليمية فقط.</p>
        </footer>
    </div>

    <script>
        function switchTab(tabIndex) {
            // إخفاء جميع محتويات التبويبات
            const tabContents = document.querySelectorAll('.tab-content');
            tabContents.forEach(content => content.classList.remove('active'));
            
            // إلغاء تنشيط جميع التبويبات
            const tabs = document.querySelectorAll('.tab');
            tabs.forEach(tab => tab.classList.remove('active'));
            
            // تفعيل التبويب والمحتوى المحدد
            tabs[tabIndex].classList.add('active');
            tabContents[tabIndex].classList.add('active');
        }
    </script>
</body>
</html>
