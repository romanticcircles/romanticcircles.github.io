<?php

use Twig\Environment;
use Twig\Error\LoaderError;
use Twig\Error\RuntimeError;
use Twig\Extension\SandboxExtension;
use Twig\Markup;
use Twig\Sandbox\SecurityError;
use Twig\Sandbox\SecurityNotAllowedTagError;
use Twig\Sandbox\SecurityNotAllowedFilterError;
use Twig\Sandbox\SecurityNotAllowedFunctionError;
use Twig\Source;
use Twig\Template;

/* __string_template__916ab62258c33f5fc5cee263fc868e19afc75c16c9ca3de1cc40dc96834adb09 */
class __TwigTemplate_740fa633f24096588441f7e187cbb059719b158a42d84855ae43626af9d0edc8 extends \Twig\Template
{
    private $source;
    private $macros = [];

    public function __construct(Environment $env)
    {
        parent::__construct($env);

        $this->source = $this->getSourceContext();

        $this->parent = false;

        $this->blocks = [
        ];
        $this->sandbox = $this->env->getExtension('\Twig\Extension\SandboxExtension');
        $this->checkSecurity();
    }

    protected function doDisplay(array $context, array $blocks = [])
    {
        $macros = $this->macros;
        // line 1
        if (((($context["delta"] ?? null) == 0) && (($context["delta_1"] ?? null) == 0))) {
            // line 2
            echo "<a href=\"";
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["view_node"] ?? null), 2, $this->source), "html", null, true);
            echo "\">
<div class=\"label_div\">
    <h4 class=\"card-title centered\">";
            // line 4
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["title_1"] ?? null), 4, $this->source), "html", null, true);
            echo "</h4>
     <p class=\"centered\">
         Authored by
         ";
            // line 7
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_author_ref"] ?? null), 7, $this->source), "html", null, true);
            echo " <br>
         Reviewed by
         ";
            // line 9
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_contributors"] ?? null), 9, $this->source), "html", null, true);
            echo "  </p>
    <a href=\"";
            // line 10
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["view_node"] ?? null), 10, $this->source), "html", null, true);
            echo "\">
    <div class=\"home-img\">
        ";
            // line 12
            if (($context["field_image"] ?? null)) {
                // line 13
                echo "            ";
                echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_image"] ?? null), 13, $this->source), "html", null, true);
                echo "
        ";
            }
            // line 15
            echo "    </div>
    </a>
</div>
</a>
";
        }
    }

    public function getTemplateName()
    {
        return "__string_template__916ab62258c33f5fc5cee263fc868e19afc75c16c9ca3de1cc40dc96834adb09";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  75 => 15,  69 => 13,  67 => 12,  62 => 10,  58 => 9,  53 => 7,  47 => 4,  41 => 2,  39 => 1,);
    }

    public function getSourceContext()
    {
        return new Source("", "__string_template__916ab62258c33f5fc5cee263fc868e19afc75c16c9ca3de1cc40dc96834adb09", "");
    }
    
    public function checkSecurity()
    {
        static $tags = array("if" => 1);
        static $filters = array("escape" => 2);
        static $functions = array();

        try {
            $this->sandbox->checkSecurity(
                ['if'],
                ['escape'],
                []
            );
        } catch (SecurityError $e) {
            $e->setSourceContext($this->source);

            if ($e instanceof SecurityNotAllowedTagError && isset($tags[$e->getTagName()])) {
                $e->setTemplateLine($tags[$e->getTagName()]);
            } elseif ($e instanceof SecurityNotAllowedFilterError && isset($filters[$e->getFilterName()])) {
                $e->setTemplateLine($filters[$e->getFilterName()]);
            } elseif ($e instanceof SecurityNotAllowedFunctionError && isset($functions[$e->getFunctionName()])) {
                $e->setTemplateLine($functions[$e->getFunctionName()]);
            }

            throw $e;
        }

    }
}
